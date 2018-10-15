# Created by: Gabor Kovesdan
# $FreeBSD: head/security/p5-Crypt-SKey/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Crypt-SKey
PORTVERSION=	0.10
PORTREVISION=	3
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl S/Key calculator

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Digest-MD4>=0:security/p5-Digest-MD4 \
		p5-Digest-SHA1>=0:security/p5-Digest-SHA1 \
		p5-Term-ReadKey>=0:devel/p5-Term-ReadKey

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
