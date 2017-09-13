# Created by: Dmitry Sivachenko <mitya@yandex-team.ru>
# $FreeBSD: head/textproc/opengrm-ngram/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	opengrm-ngram
PORTVERSION=	1.3.1
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	http://openfst.cs.nyu.edu/twiki/pub/GRM/NGramDownload/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Library for making n-gram language models encoded as weighted FSTs

LICENSE=	APACHE20

BROKEN_powerpc64=	fails to compile: ngram-count.cc: 'to_string' is not a member of 'std'

LIB_DEPENDS=	libfst.so:math/openfst

USES=		compiler:c++11-lib libtool localbase
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
