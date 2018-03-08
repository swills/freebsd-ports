# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: head/devel/pear-XML_Serializer/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	XML_Serializer
PORTVERSION=	0.21.0
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Swiss-army knive for reading and writing XML files

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
