
/*
 *    Addon: Revival Plus
 *    Script: RPL_Trace.c
 *    Author: Tomáš Benedikt
 *
 *    © 2020 Tomáš Benedikt
 *
 *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
 *    <summary>Debugging Method for Logging into RevivalPlus.log.</summary>
 *
 */

 /*
class Trace
{
  void Trace() {}

  static private string GetDate(bool compact = false) {
		int Y, m, d, H, M, S;

		GetYearMonthDay(Y, m, d);
		GetHourMinuteSecond(H, M, S);

		string datetime = d.ToStringLen(2) + "." + m.ToStringLen(2) + "." + Y.ToStringLen(4) + " " + H.ToStringLen(2) + ":" + M.ToStringLen(2) + ":" + S.ToStringLen(2);
		if (compact) {
			datetime.Replace(" ", "_");
			datetime.Replace(".", "-");
			datetime.Replace(":", "-");
		}

		return datetime;
	}

  static void Log(int code, string content) {
		string path = "$profile:\\RevivalPlus\\logs\\RevivalPlus.log";
    string context = "";

    switch (code) {
      case 0:
      context = "[INFO]";
      break;
      case 1:
      context = "[WARNING]";
      break;
      case 2:
      context = "[ERROR]";
      break;
    }

		FileHandle LogHandler = OpenFile(path, FileMode.APPEND);
		if (LogHandler != 0) {
				FPrintln(LogHandler, GetDate() + " | [REVIVALPLUS] | " + context + " " + content);
				CloseFile(LogHandler);
		}
	}
};
  */
