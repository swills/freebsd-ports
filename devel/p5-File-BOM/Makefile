# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/devel/p5-File-BOM/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	File-BOM
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl module to handle Unicode byte order marks

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Readonly>=0:devel/p5-Readonly \
		p5-Test-Exception>=0:devel/p5-Test-Exception
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
