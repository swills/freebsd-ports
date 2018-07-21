# $FreeBSD: head/textproc/rubygem-gitlab-markup/Makefile 460833 2018-02-03 18:22:37Z amdmi3 $

PORTNAME=	gitlab-markup
PORTVERSION=	1.6.4
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Render any fancy GitLab markup

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gem python:run shebangfix
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/github-markup

SHEBANG_FILES=	lib/github/commands/rest2html \
		script/bootstrap \
		script/cibuild

.include <bsd.port.mk>
