# $FreeBSD: head/devel/p5-Test-Net-LDAP/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Test-Net-LDAP
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of Net::LDAP subclass for testing

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-perl-ldap>=0.5800:net/p5-perl-ldap
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>
