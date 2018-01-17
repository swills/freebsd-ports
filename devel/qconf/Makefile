# Created by: Andreev Maxim <andreevmaxim@gmail.com>
# $FreeBSD: head/devel/qconf/Makefile 458875 2018-01-12 21:44:43Z swills $

PORTNAME=	qconf
DISTVERSIONPREFIX=	v
DISTVERSION=	2.4
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to create configure script for qmake-based project

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:bzip2
USE_QT4=	corelib xml moc_build qmake_build rcc_build
HAS_CONFIGURE=	yes
QT_NONSTANDARD=	yes
MAKE_ARGS=	INSTALL_ROOT="${STAGEDIR}"

CONFIGURE_ARGS=	--prefix=${PREFIX} \
		--datadir=${DATADIR:S,/qconf,,} \
		--qtdir=${PREFIX} \
		--verbose

USE_GITHUB=	yes
GH_ACCOUNT=	psi-plus

.include <bsd.port.mk>
