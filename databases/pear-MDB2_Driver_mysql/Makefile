# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: head/databases/pear-MDB2_Driver_mysql/Makefile 461158 2018-02-07 17:46:10Z mat $

PORTNAME=	MDB2_Driver_mysql
DISTVERSION=	1.5.0b4
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR MySQL MDB2 driver

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	pear-MDB2>=0:databases/pear-MDB2
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		pear
USE_PHP=	mysql
IGNORE_WITH_PHP=	70 71 72

.include <bsd.port.mk>
