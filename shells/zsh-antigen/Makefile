# $FreeBSD$

PORTNAME=	zsh-antigen
PORTREVISION=	1
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.3
CATEGORIES=	shells

MAINTAINER=	gudfitz@gmail.com
COMMENT=	Tool for managing Zshell plugins inspired by Vundle

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_DEFINE=	GIT GITLITE
OPTIONS_DEFAULT=GIT

GIT_DESC=	Use devel/git (more depends)
GITLITE_DESC=	Use devel/git-lite (fewer depends)

GIT_RUN_DEPENDS=zsh>=4.3.11:shells/zsh \
	git:devel/git

GITLITE_RUN_DEPENDS=	zsh>=4.3.11:shells/zsh \
	git:devel/git-lite

USE_GITHUB=	yes
GH_ACCOUNT=	zsh-users
GH_PROJECT=	antigen

NO_ARCH=	yes
NO_BUILD=	yes
PLIST_FILES=	${DATADIR}/antigen.zsh
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/bin/antigen.zsh ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
