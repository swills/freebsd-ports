# Created by: Gregory Neil Shapiro <gshapiro@FreeBSD.org>
# $FreeBSD: head/security/p5-Crypt-HCE_SHA/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Crypt-HCE_SHA
PORTVERSION=	0.70
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl5 interface to one way hash chaining block cipher

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Digest-SHA1>=0:security/p5-Digest-SHA1

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
