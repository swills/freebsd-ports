# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: head/databases/pear-MDB2_Driver_mysql/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	MDB2_Driver_mysql
DISTVERSION=	1.5.0b4
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR MySQL MDB2 driver

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PEAR_PKGNAMEPREFIX}MDB2>=0:databases/pear-MDB2@${PHP_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		pear
USE_PHP=	mysql
IGNORE_WITH_PHP=	70 71 72 73

.include <bsd.port.mk>
