using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MessageBlaster
{
    public class SalesDetailLine
    {
        public string SalesOrderID { get; set; }
        public string SalesOrderDetailID { get; set; }
	    public string OrderQty { get; set; }
	    public string ProductID { get; set; }
	    public string UnitPrice { get; set; }
	    public string UnitPriceDiscount { get; set; }
	    public string LineTotal { get; set; }
    }
}
