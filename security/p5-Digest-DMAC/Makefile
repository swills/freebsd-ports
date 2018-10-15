# Created by: Gabor Kovesdan
# $FreeBSD: head/security/p5-Digest-DMAC/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Digest-DMAC
PORTVERSION=	1.1.4
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl5 interface to DMAC Double Message-Digest Algorithms

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-CBC>=0:security/p5-Crypt-CBC \
		p5-MIME-Base64>=0:converters/p5-MIME-Base64

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
