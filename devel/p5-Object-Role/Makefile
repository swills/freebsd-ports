# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Object-Role/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Object-Role
PORTVERSION=	0.001
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl base class for non-Moose roles

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Sub-Name>=0:devel/p5-Sub-Name

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
