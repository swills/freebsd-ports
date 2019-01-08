# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/textproc/cgrep/Makefile 489474 2019-01-06 12:18:06Z arrowd $

PORTNAME=	cgrep
PORTVERSION=	6.6.25
PORTREVISION=	2
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
