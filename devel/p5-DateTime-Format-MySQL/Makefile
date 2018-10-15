# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/devel/p5-DateTime-Format-MySQL/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	DateTime-Format-MySQL
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse and format MySQL dates and times

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:devel/p5-DateTime \
		p5-DateTime-Format-Builder>=0.6:devel/p5-DateTime-Format-Builder

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
