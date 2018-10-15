# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: head/devel/p5-Class-Container/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Class-Container
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Glues object frameworks together transparently

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Params-Validate>=0:devel/p5-Params-Validate

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
