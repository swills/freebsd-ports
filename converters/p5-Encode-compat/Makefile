# Created by: Erwin Lansing <erwin@lansing.dk>
# $FreeBSD: head/converters/p5-Encode-compat/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Encode-compat
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Compatibility interfaces for Encode.pm on Perl < 5.7.1

BUILD_DEPENDS=	p5-Text-Iconv>=0:converters/p5-Text-Iconv
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
