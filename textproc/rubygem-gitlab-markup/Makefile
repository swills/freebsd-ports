# $FreeBSD: head/textproc/rubygem-gitlab-markup/Makefile 450268 2017-09-21 15:29:24Z sunpoet $

PORTNAME=	gitlab-markup
PORTVERSION=	1.6.2
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Render any fancy GitLab markup

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/github-markup

SHEBANG_FILES=	lib/github/commands/rest2html \
		script/bootstrap \
		script/cibuild
python_CMD=	${LOCALBASE}/bin/python2

.include <bsd.port.mk>
