# $FreeBSD: head/textproc/rubygem-gitlab-markup/Makefile 460833 2018-02-03 18:22:37Z amdmi3 $

PORTNAME=	gitlab-markup
PORTVERSION=	1.6.3
PORTREVISION=	1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Render any fancy GitLab markup

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem python:run shebangfix

PLIST_FILES=	bin/github-markup

SHEBANG_FILES=	lib/github/commands/rest2html \
		script/bootstrap \
		script/cibuild

.include <bsd.port.mk>
