# Created by: laddassm
# $FreeBSD: head/editors/klat4/Makefile 486467 2018-12-02 15:41:47Z rene $

PORTNAME=	klat4
PORTVERSION=	0.6.1
PORTREVISION=	15
CATEGORIES=	editors
MASTER_SITES=	http://klat.algebraical.info/

MAINTAINER=	anna.ladilova@gmail.com
COMMENT=	LaTeX source editor for KDE4

LICENSE=	GPLv2+

DEPRECATED=		Qt4 has been EOL since december 2015
EXPIRATION_DATE=	2018-12-31

USES=		cmake gettext-tools kde:4 qt:4 tar:bzip2
USE_KDE=	automoc4 kate kdelibs
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
