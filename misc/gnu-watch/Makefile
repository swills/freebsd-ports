# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/misc/gnu-watch/Makefile 432828 2017-01-30 10:49:03Z ehaupt $

PORTNAME=	watch
DISTVERSION=	3.3.12
CATEGORIES=	misc
MASTER_SITES=	SF/procps-ng/Production \
		LOCAL/ehaupt
PKGNAMEPREFIX=	gnu-
DISTNAME=	procps-ng-${DISTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	GNU watch command

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USES=		autoreconf gettext gmake libtool localbase:ldflags ncurses \
		pkgconfig tar:xz
USE_CSTD=	gnu99

OPTIONS_DEFINE=	UNICODE
OPTIONS_DEFAULT=UNICODE

UNICODE_CONFIGURE_ENABLE=	watch8bit

PLIST_FILES=	bin/${PKGBASE} man/man1/gnu-watch.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin/${PKGBASE}
	${INSTALL_MAN} ${WRKSRC}/watch.1 \
		${STAGEDIR}${MANPREFIX}/man/man1/${PKGBASE}.1

.include <bsd.port.mk>
