import java.io.*;

public class FileOperator {
    public static boolean delete(String path) {
        try {
            File file = new File(path);
            if (file.isFile()) {
                file.delete();
                return true;
            } else if (file.isDirectory()) {
                return delDectory(path);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    public static boolean move(String path, String target) {
        boolean flag = true;
        try {
            flag = flag & copy(path, target) & delete(path);
            return flag;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    public static boolean copy(String path, String target) throws Exception {
        boolean flag = true;
        if (new File(path).isFile()) {
            return copy(path, target);
        } else {
            File file = new File(path);
            String str=target+File.separator+file.getName();
            new File(str).mkdir();
            File targetFile = new File(target+File.separator+file.getName());
            System.out.print(targetFile.getAbsolutePath());
            File[] files = file.listFiles();
            for (File f : files) {
                if (f.isDirectory()) {
                    targetFile.mkdir();
                    flag = flag & copy(f.getAbsolutePath(), target + File.separator + f.getName());
                } else {
                    flag = flag & copyFile(f.getAbsolutePath(), targetFile.getAbsolutePath());
                }
            }
        }
        return flag;
    }

    private static boolean copyFile(String path, String target) throws Exception {
        try (
                BufferedInputStream input = new BufferedInputStream(new FileInputStream(path));
                BufferedOutputStream output = new BufferedOutputStream(new FileOutputStream(target));) {
            byte[] buffer = new byte[1024];
            int len;
            while ((len = input.read(buffer)) != -1) {
                output.write(buffer, 0, len);
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    private static boolean delDectory(String path) {
        boolean flag = true;
        File file = new File(path);
        if (file.delete()) {
            return true;
        } else {
            File[] files = new File(path).listFiles();
            for (File f : files) {
                if (f.isFile()) {
                    return f.delete();
                } else {
                    flag = flag & delDectory(f.getAbsolutePath());
                }
            }
        }
        file.delete();
        return flag;
    }
}
