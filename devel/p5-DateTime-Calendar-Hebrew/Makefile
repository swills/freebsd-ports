# Created by: mat
# $FreeBSD: head/devel/p5-DateTime-Calendar-Hebrew/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	DateTime-Calendar-Hebrew
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dates in the Hebrew calendar

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:devel/p5-DateTime \
		p5-DateTime-Event-Sunrise>=0:devel/p5-DateTime-Event-Sunrise

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
