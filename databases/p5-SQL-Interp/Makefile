# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/databases/p5-SQL-Interp/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	SQL-Interp
PORTVERSION=	1.24
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interpolate Perl variables into SQL with DBI

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=1:databases/p5-DBI \
		p5-Sub-Exporter>=0:devel/p5-Sub-Exporter
RUN_DEPENDS=	p5-DBI>=1:databases/p5-DBI \
		p5-Sub-Exporter>=0:devel/p5-Sub-Exporter

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
