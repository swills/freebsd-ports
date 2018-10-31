# $FreeBSD: head/textproc/rubygem-github-markup17/Makefile 483495 2018-10-30 16:11:10Z mfechner $

PORTNAME=	github-markup
PORTVERSION=	1.7.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	17

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Render any fancy markup

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gem shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

REINPLACE_ARGS=	-i ''

PLIST_FILES=	bin/github-markup

SHEBANG_FILES=	script/*

PORTSCOUT=	limit:^1\.7\.

post-patch:
	@${REINPLACE_CMD} -e '1d' ${WRKSRC}/lib/github/commands/rest2html

.include <bsd.port.mk>
