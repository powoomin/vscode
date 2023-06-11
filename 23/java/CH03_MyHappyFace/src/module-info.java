module CH03_MyHappyFace {
	requires javafx.controls;
	
	opens application to javafx.graphics, javafx.fxml;
}
