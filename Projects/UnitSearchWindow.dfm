object SearchWindow: TSearchWindow
  Left = 0
  Top = 0
  Caption = 'SearchWindow'
  ClientHeight = 753
  ClientWidth = 782
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel
    Left = 32
    Top = 16
    Width = 329
    Height = 40
    Caption = #1055#1086#1080#1089#1082' '#1087#1088#1077#1089#1090#1091#1087#1085#1080#1082#1072' '#1074' '#1073#1072#1079#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 32
    Top = 600
    Width = 332
    Height = 28
    Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1087#1086#1076#1077#1083#1100#1097#1080#1082#1072#1093
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object StringGrid1: TStringGrid
    Left = 32
    Top = 62
    Width = 537
    Height = 299
    ColCount = 2
    DefaultColWidth = 250
    RowCount = 14
    FixedRows = 0
    TabOrder = 0
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24)
  end
  object Button1: TButton
    Left = 630
    Top = 316
    Width = 91
    Height = 45
    Caption = #1053#1072#1081#1090#1080'!'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object StringGrid2: TStringGrid
    Left = 32
    Top = 400
    Width = 697
    Height = 169
    ColCount = 14
    FixedCols = 0
    RowCount = 10
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
end
