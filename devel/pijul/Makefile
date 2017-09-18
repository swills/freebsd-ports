# Created by: Carlo Strub
# $FreeBSD: head/devel/pijul/Makefile 450024 2017-09-17 20:59:37Z cs $

PORTNAME=	pijul
PORTVERSION=	0.8.0
CATEGORIES=	devel
MASTER_SITES=	https://pijul.org/releases/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Distributed version control system

LICENSE=	GPLv2

USES=		cargo

PLIST_FILES=	bin/pijul \
		man/man1/pijul-show-dependencies.1.gz

WRKSRC=		${WRKDIR}/${DISTNAME}/pijul
CARGO_CONFIGURE=no
INSTALL_TARGET=	install-strip

post-install:
	${INSTALL_MAN} ${WRKDIR}/${DISTNAME}/man/en/man1/pijul-show-dependencies.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
