' Theme test: Visual Basic
Imports System
Imports System.Collections.Generic

Public Class User
    Public ReadOnly Property Name As String
    Public ReadOnly Property Age As Integer

    Public Sub New(name As String, Optional age As Integer = 0)
        Me.Name = name
        Me.Age = age
    End Sub

    Public Function Greet() As String
        Return $"Hello, {Name}! Age: {Age}"
    End Function
End Class

Module Program
    Sub Main()
        Dim users As New List(Of User) From {
            New User("Ada", 36),
            New User("Linus")
        }

        For Each user In users
            If user.Age > 30 Then
                Console.WriteLine(user.Greet())
            Else
                Console.WriteLine("Young user")
            End If
        Next
    End Sub
End Module