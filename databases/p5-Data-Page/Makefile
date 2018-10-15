# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/databases/p5-Data-Page/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Data-Page
PORTVERSION=	2.02
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pager utility for Class::DBI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor-Chained>=0:devel/p5-Class-Accessor-Chained
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
