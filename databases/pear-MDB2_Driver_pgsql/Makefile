# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: head/databases/pear-MDB2_Driver_pgsql/Makefile 443165 2017-06-11 07:29:12Z sunpoet $

PORTNAME=	MDB2_Driver_pgsql
DISTVERSION=	1.5.0b4
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR pgsql MDB2 driver

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	pear-MDB2>=0:databases/pear-MDB2
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		pear php
USE_PHP=	pgsql

.include <bsd.port.mk>
