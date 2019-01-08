# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: head/databases/pear-MDB2_Driver_mysql/Makefile 489349 2019-01-05 15:47:56Z rene $

PORTNAME=	MDB2_Driver_mysql
DISTVERSION=	1.5.0b4
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR MySQL MDB2 driver

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEAR_PKGNAMEPREFIX}MDB2>=0:databases/pear-MDB2@${PHP_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		pear
USE_PHP=	mysqli

NO_ARCH=	yes

.include <bsd.port.mk>
