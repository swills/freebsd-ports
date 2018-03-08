# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/www/pear-UDDI/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	UDDI
PORTVERSION=	0.2.4
CATEGORIES=	www pear finance

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR UDDI for PHP

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR} \
		${PEARDIR}/XML/Util.php:devel/pear-XML_Util@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
