object CriminalWindow: TCriminalWindow
  Left = 0
  Top = 0
  Caption = 'CriminalWindow'
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
  object LabelBaseCr: TLabel
    Left = 216
    Top = 16
    Width = 213
    Height = 28
    Caption = #1041#1072#1079#1072' '#1087#1088#1077#1089#1090#1091#1087#1085#1080#1082#1086#1074
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object ArchiveButton: TButton
    Left = 152
    Top = 72
    Width = 113
    Height = 41
    Caption = #1040#1088#1093#1080#1074
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object DelButton: TButton
    Left = 360
    Top = 72
    Width = 137
    Height = 41
    Caption = #1059#1076#1072#1083#1077#1085#1080#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object DBCriminalGreed: TStringGrid
    Left = 40
    Top = 144
    Width = 609
    Height = 273
    ColCount = 14
    FixedCols = 0
    RowCount = 10
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
  object RefreshButton: TButton
    Left = 264
    Top = 480
    Width = 137
    Height = 41
    Caption = #1054#1073#1085#1086#1074#1080#1090#1100'!'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
end
