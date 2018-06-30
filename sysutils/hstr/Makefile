# $FreeBSD: head/sysutils/hstr/Makefile 473181 2018-06-24 05:04:48Z tobik $

PORTNAME=	hstr
DISTVERSION=	1.25
CATEGORIES=	sysutils

MAINTAINER=	monsieurp@gentoo.org
COMMENT=	Bash and Zsh shell history suggest box

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf ncurses readline
USE_GITHUB=	yes
GH_ACCOUNT=	dvorka
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/hh bin/hstr man/man1/hh.1.gz man/man1/hstr.1.gz

.include <bsd.port.mk>
