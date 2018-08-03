# $FreeBSD: head/editors/ecrire/Makefile 476242 2018-08-02 17:03:51Z yuri $

PORTNAME=	ecrire
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.1-83
DISTVERSIONSUFFIX=	-gc6c81eb
CATEGORIES=	editors enlightenment
DIST_SUBDIR=	enlightenment

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	EFL (Enlightenment) graphical text editor

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libefl.so:devel/efl

USES=		cmake:outsource desktop-file-utils pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	Obsidian-StudiosInc

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CMAKE_BOOL=	ENABLE_NLS

.include <bsd.port.mk>
