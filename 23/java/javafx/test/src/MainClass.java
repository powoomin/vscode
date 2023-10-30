import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
 
public class MainClass extends Application {
 
    public static void main(String[] args) {
        // 실행~~
        launch(args);
    }
     
    @Override
    public void start(Stage stage) throws Exception {
        // 창 제목 설정.
        stage.setTitle("열려라 참깨!");
         
        // 버튼 만들기.
        Button btn = new Button();
        btn.setText("누르시오~");
         
        btn.setOnAction(new EventHandler<actionevent>() { // 버튼 눌렀을 때 실행됨.
            @Override
            public void handle(ActionEvent arg0) {
                Alert alert = new Alert(AlertType.INFORMATION);
                alert.setTitle("알림");
                alert.setContentText("안녕?");
                alert.setHeaderText(null);
                alert.show();
            }
        });
         
        // 판때기 하나 깔아주시고,,
        StackPane sp = new StackPane();
        sp.getChildren().addAll(btn);
         
        // 창 설정.
        stage.setScene(new Scene(sp, 500, 300));
        stage.show();
    }
     
 
}