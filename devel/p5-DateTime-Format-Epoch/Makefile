# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Format-Epoch/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	DateTime-Format-Epoch
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert DateTimes to/from epoch seconds

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0.31:devel/p5-DateTime \
		p5-Params-Validate>=0:devel/p5-Params-Validate

PORTSCOUT=	skipv:0.801

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
