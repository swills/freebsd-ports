# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/textproc/pear-Structures_DataGrid_Renderer_XLS/Makefile 443333 2017-06-11 07:45:56Z sunpoet $

PORTNAME=	Structures_DataGrid_Renderer_XLS
PORTVERSION=	0.1.3
CATEGORIES=	textproc databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Renderer driver that generates a XLS string

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array \
		${PEARDIR}/Spreadsheet/Excel/Writer.php:textproc/pear-Spreadsheet_Excel_Writer
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array \
		${PEARDIR}/Spreadsheet/Excel/Writer.php:textproc/pear-Spreadsheet_Excel_Writer

USES=		pear

.include <bsd.port.mk>
