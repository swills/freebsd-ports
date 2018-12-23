# Created by: Oleg Sharoiko <os@rsu.ru>
# $FreeBSD: head/databases/pear-MDB/Makefile 488103 2018-12-22 16:34:05Z joneum $

PORTNAME=	MDB
PORTVERSION=	1.3.0
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR unified API for DB access, based on user meta data

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:devel/pear-XML_Parser@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
