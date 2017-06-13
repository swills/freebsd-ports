# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/databases/p5-DBD-LDAP/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBD-LDAP
PORTVERSION=	0.22
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DBI interface for accessing LDAP servers

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-perl-ldap>=0.01:net/p5-perl-ldap \
		p5-DBI>=0:databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
