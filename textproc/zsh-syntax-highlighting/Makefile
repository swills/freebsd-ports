# $FreeBSD: head/textproc/zsh-syntax-highlighting/Makefile 482498 2018-10-20 13:57:40Z jrm $

PORTNAME=	zsh-syntax-highlighting
DISTVERSION=	0.6.0-186
DISTVERSIONSUFFIX=	-gdf8b2fb
PORTEPOCH=	1
CATEGORIES=	textproc

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Fish shell syntax highlighting for Zsh

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.md

RUN_DEPENDS=	zsh>=5.4:shells/zsh

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	zsh-users

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
