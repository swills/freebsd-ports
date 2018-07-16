# $FreeBSD$

PORTNAME=	ocsreports
PORTVERSION=	2.4.1
CATEGORIES=	net-mgmt

MAINTAINER=	dgeo@centrale-marseille.fr
COMMENT=	Webconsole for OCS Inventory NG

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:web
USE_PHP=	mysqli pcre zlib session xml gd zip openssl mbstring soap
NO_ARCH=	yes
NO_BUILD=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	OCSInventory-NG
GH_PROJECT=	OCSInventory-ocsreports
SUB_FILES=	apache.conf pkg-message

ETCDIR=		${PREFIX}/etc/OCSInventory

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR} ${STAGEDIR}${ETCDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR} "! -name dbconfig.inc.php ! -name cas.config.php")
	${INSTALL_DATA} ${WRKSRC}/dbconfig.inc.php ${STAGEDIR}${WWWDIR}/dbconfig.inc.php.sample
	${INSTALL_DATA} ${WRKSRC}/backend/require/cas.config.php ${STAGEDIR}${WWWDIR}/backend/require/cas.config.php.sample
	${INSTALL_DATA} ${WRKDIR}/apache.conf ${STAGEDIR}${ETCDIR}/ocsreports.inc.sample

.include <bsd.port.mk>
# $FreeBSD$

PORTNAME=	ocsinventory-ng
PORTVERSION=	2.1.2
PORTREVISION=	2
CATEGORIES=	net-mgmt
MASTER_SITES=	http://launchpadlibrarian.net/179739296/
DISTNAME=	OCSNG_UNIX_SERVER-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open Computer and Software Inventory Next Generation

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	p5-XML-Simple>=0:textproc/p5-XML-Simple \
		p5-DBI>=0:databases/p5-DBI \
		p5-DBD-mysql>=0:databases/p5-DBD-mysql \
		p5-Apache-DBI>=0:www/p5-Apache-DBI \
		p5-Net-IP>=0:net-mgmt/p5-Net-IP \
		p5-SOAP-Lite>=0:net/p5-SOAP-Lite \
		p5-XML-Entities>=0:textproc/p5-XML-Entities

USES=		apache:run,2.2+ mysql perl5 php:web
USE_PHP=	mysql pcre zlib session xml gd zip openssl mbstring
NO_ARCH=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${DISTNAME}
SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	@(cd ${WRKSRC}/ && ${COPYTREE_SHARE} "Apache binutils dtd etc ocsreports" ${STAGEDIR}${DATADIR}/)
	${INSTALL_SCRIPT} ${WRKSRC}/setup.sh ${STAGEDIR}${DATADIR}/

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
