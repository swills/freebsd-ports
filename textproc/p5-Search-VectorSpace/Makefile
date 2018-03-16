# Created by: clsung
# $FreeBSD: head/textproc/p5-Search-VectorSpace/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	Search-VectorSpace
PORTVERSION=	0.02
PORTREVISION=	11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Very basic vector-space search engine perl module

BUILD_DEPENDS=	PDL>=0:math/PDL \
		p5-Lingua-Stem>=0:textproc/p5-Lingua-Stem
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
