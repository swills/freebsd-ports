# Created by: Thomas Abthorpe <thomas@goodking.ca>
# $FreeBSD: head/devel/pear-Date_Holidays/Makefile 488111 2018-12-22 17:21:00Z joneum $

PORTNAME=	Date_Holidays
PORTVERSION=	0.21.8
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR driver based class to calculate holidays

LICENSE=	PHP301

BUILD_DEPENDS=	${PEARDIR}/Date.php:devel/pear-Date@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Date.php:devel/pear-Date@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}

USES=		pear

OPTIONS_DEFINE=	PEAR_CONSOLE_GETARGS
PEAR_CONSOLE_GETARGS_DESC=	Console::Getargs support

PEAR_CONSOLE_GETARGS_BUILD_DEPENDS=${PEARDIR}/Console/Getargs.php:devel/pear-Console_Getargs@${PHP_FLAVOR}

.include <bsd.port.mk>
