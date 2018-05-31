# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/textproc/cgrep/Makefile 470870 2018-05-25 21:44:12Z tcberner $

PORTNAME=	cgrep
PORTVERSION=	6.6.25
CATEGORIES=	textproc

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Context-aware grep for source codes

LICENSE=	GPLv2

USE_CABAL=	aeson ansi-terminal async cmdargs either exceptions regex-pcre \
		regex-posix safe split stringsearch unicode-show unix-compat \
		utf8-string yaml

EXECUTABLE=	cgrep
STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
