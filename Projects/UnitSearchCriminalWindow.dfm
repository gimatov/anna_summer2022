object SearchCriminalWindow: TSearchCriminalWindow
  Left = 0
  Top = 0
  Caption = 'SearchCriminalWindow'
  ClientHeight = 633
  ClientWidth = 672
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel
    Left = 160
    Top = 31
    Width = 296
    Height = 28
    Caption = #1055#1086#1080#1089#1082' '#1087#1088#1077#1089#1090#1091#1087#1085#1080#1082#1072' '#1074' '#1073#1072#1079#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object StringGrid1: TStringGrid
    Left = 56
    Top = 74
    Width = 537
    Height = 207
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
    Left = 502
    Top = 306
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
    Left = 16
    Top = 448
    Width = 609
    Height = 89
    ColCount = 14
    FixedCols = 0
    RowCount = 10
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
end
