import org.w3c.dom.*;
import org.xml.sax.SAXException;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import java.io.File;
import java.io.IOException;

public class XMLUtil {
    public static Object getBean(){
        try{
            DocumentBuilderFactory builderFactory=DocumentBuilderFactory.newInstance();
            DocumentBuilder builder=builderFactory.newDocumentBuilder();
            Document doc;
            doc=builder.parse(new File("./config.xml"));

            NodeList n1=doc.getElementsByTagName("className");
            Node classNode=n1.item(0).getFirstChild();
            String cName=classNode.getNodeValue();

            Class c=Class.forName(cName);
            Object obj=c.newInstance();
            return obj;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
