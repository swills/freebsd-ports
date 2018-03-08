# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/pear-Net_Gearman/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_Gearman
PORTVERSION=	0.2.3
PORTREVISION=	3
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Gearman client libraray for PHP

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/share/pear/PEAR.php:devel/pear@${PHP_FLAVOR}
RUN_DEPENDS=	${LOCALBASE}/share/pear/PEAR.php:devel/pear@${PHP_FLAVOR}

USE_PHP=	json mbstring sockets
USES=		pear php

.include <bsd.port.mk>
