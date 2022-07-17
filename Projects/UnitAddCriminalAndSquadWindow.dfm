object AddCriminalAndSquadWindow: TAddCriminalAndSquadWindow
  Left = 0
  Top = 0
  Caption = 'AddCriminalAndSquadWindow'
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
  object LabelBaseCr: TLabel
    Left = 40
    Top = 16
    Width = 365
    Height = 28
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1087#1088#1077#1089#1090#1091#1087#1085#1080#1082#1072' '#1074' '#1073#1072#1079#1091
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 38
    Top = 448
    Width = 367
    Height = 28
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1075#1088#1091#1087#1087#1080#1088#1086#1074#1082#1080' '#1074' '#1073#1072#1079#1091
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
  end
  object ArchiveButton: TButton
    Left = 504
    Top = 401
    Width = 257
    Height = 41
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Button1: TButton
    Left = 504
    Top = 640
    Width = 257
    Height = 41
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Lucida Sans Unicode'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object StringGrid1: TStringGrid
    Left = 24
    Top = 70
    Width = 537
    Height = 299
    ColCount = 2
    DefaultColWidth = 250
    RowCount = 14
    FixedRows = 0
    TabOrder = 2
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
  object DBSquadGreed: TStringGrid
    Left = 24
    Top = 528
    Width = 625
    Height = 57
    ColCount = 2
    DefaultColWidth = 300
    RowCount = 2
    FixedRows = 0
    TabOrder = 3
  end
end
