PORTNAME=			ocl-icd
PORTVERSION=	2.2.13
DISTVERSIONPREFIX=	v
CATEGORIES=		devel

MAINTAINER=		ohartmann@walstatt.org
COMMENT=			OpenCL Installable Client Driver

LICENSE=			BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	opencl>=3.0:devel/opencl

USE_GITHUB=		yes
GH_ACCOUNT=		OCL-dev
GH_PROJECT=		ocl-icd

USES=					autoreconf gmake libtool localbase:ldflags pathfix

USE_RUBY=			yes
RUBY_NO_RUN_DEPENDS=yes
USE_LDCONFIG=		yes
GNU_CONFIGURE=	yes
CPPFLAGS+=			-DCL_TARGET_OPENCL_VERSION=300

INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+=--disable-official-khronos-headers \
				--enable-custom-vendordir \
				--enable-pthread-once

OPTIONS_DEFINE=	DOCS YAMLUPD
YAMLUPD_DESC=	Check for inst. ICD, update YAML Db
OPTIONS_SUB=	yes

MANPAGES_BUILD_DEPENDS=	xmlto:textproc/xmlto \
				asciidoc:textproc/asciidoc

YAMLUPD_CONFIGURE_ENABLE= update-database

post-patch:
	@${REINPLACE_CMD} -e 's|/etc/|${LOCALBASE}/etc/|g' \
		${WRKSRC}/doc/libOpenCL.7.txt.in

.include <bsd.port.mk>
