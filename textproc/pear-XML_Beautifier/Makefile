# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/textproc/pear-XML_Beautifier/Makefile 443335 2017-06-11 07:46:06Z sunpoet $

PORTNAME=	XML_Beautifier
PORTVERSION=	1.2.2
CATEGORIES=	textproc devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR class to format XML documents

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util

USES=		pear

.include <bsd.port.mk>
