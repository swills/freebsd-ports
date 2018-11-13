# Created by: Uffe Jakobsen <uffe@uffe.org>
# $FreeBSD: head/science/sigrok-cli/Makefile 483892 2018-11-03 12:53:26Z bsam $

PORTNAME=	sigrok-cli
PORTVERSION=	0.7.1
CATEGORIES=	science cad
MASTER_SITES=	http://sigrok.org/download/source/sigrok-cli/

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Framework for hardware logic analyzers, CLI client

LICENSE=	GPLv3

LIB_DEPENDS=	libserialport.so:devel/libserialport \
		libsigrok.so:devel/libsigrok \
		libsigrokdecode.so:devel/libsigrokdecode

USES=		desktop-file-utils gettext-runtime gmake gnome pathfix \
		libtool pkgconfig

GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes
INSTALLS_ICONS=	yes

PLIST_FILES=	bin/sigrok-cli man/man1/sigrok-cli.1.gz \
		share/applications/org.sigrok.sigrok-cli.desktop \
		share/icons/hicolor/scalable/apps/sigrok-cli.svg

.include <bsd.port.mk>
